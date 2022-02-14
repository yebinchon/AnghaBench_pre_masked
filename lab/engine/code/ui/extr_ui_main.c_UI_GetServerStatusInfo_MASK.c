
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* text; char* address; size_t numLines; char*** lines; char* pings; } ;
typedef TYPE_1__ serverStatusInfo_t ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_7( const char *VAR_3, serverStatusInfo_t *VAR_4 ) {
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_4) {
  FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 }


 if (VAR_3 && *VAR_3 == '\0') {
  return VAR_1;
 }


 if (!VAR_4) {
  FUNC_6( VAR_3, ((void*)0), 0);
  return VAR_1;
 }

 if ( FUNC_6( VAR_3, VAR_4->text, sizeof(VAR_4->text)) ) {
  FUNC_1(VAR_4->address, VAR_3, sizeof(VAR_4->address));
  VAR_5 = VAR_4->text;
  VAR_4->numLines = 0;
  VAR_4->lines[VAR_4->numLines][0] = "Address";
  VAR_4->lines[VAR_4->numLines][1] = "";
  VAR_4->lines[VAR_4->numLines][2] = "";
  VAR_4->lines[VAR_4->numLines][3] = VAR_4->address;
  VAR_4->numLines++;

  while (VAR_5 && *VAR_5) {
   VAR_5 = FUNC_4(VAR_5, '\\');
   if (!VAR_5) break;
   *VAR_5++ = '\0';
   if (*VAR_5 == '\\')
    break;
   VAR_4->lines[VAR_4->numLines][0] = VAR_5;
   VAR_4->lines[VAR_4->numLines][1] = "";
   VAR_4->lines[VAR_4->numLines][2] = "";
   VAR_5 = FUNC_4(VAR_5, '\\');
   if (!VAR_5) break;
   *VAR_5++ = '\0';
   VAR_4->lines[VAR_4->numLines][3] = VAR_5;

   VAR_4->numLines++;
   if (VAR_4->numLines >= VAR_0)
    break;
  }

  if (VAR_4->numLines < VAR_0-3) {

   VAR_4->lines[VAR_4->numLines][0] = "";
   VAR_4->lines[VAR_4->numLines][1] = "";
   VAR_4->lines[VAR_4->numLines][2] = "";
   VAR_4->lines[VAR_4->numLines][3] = "";
   VAR_4->numLines++;

   VAR_4->lines[VAR_4->numLines][0] = "num";
   VAR_4->lines[VAR_4->numLines][1] = "score";
   VAR_4->lines[VAR_4->numLines][2] = "ping";
   VAR_4->lines[VAR_4->numLines][3] = "name";
   VAR_4->numLines++;

   VAR_9 = 0;
   VAR_10 = 0;
   while (VAR_5 && *VAR_5) {
    if (*VAR_5 == '\\')
     *VAR_5++ = '\0';
    VAR_6 = VAR_5;
    VAR_5 = FUNC_4(VAR_5, ' ');
    if (!VAR_5)
     break;
    *VAR_5++ = '\0';
    VAR_7 = VAR_5;
    VAR_5 = FUNC_4(VAR_5, ' ');
    if (!VAR_5)
     break;
    *VAR_5++ = '\0';
    VAR_8 = VAR_5;
    FUNC_0(&VAR_4->pings[VAR_10], sizeof(VAR_4->pings)-VAR_10, "%d", VAR_9);
    VAR_4->lines[VAR_4->numLines][0] = &VAR_4->pings[VAR_10];
    VAR_10 += FUNC_5(&VAR_4->pings[VAR_10]) + 1;
    VAR_4->lines[VAR_4->numLines][1] = VAR_6;
    VAR_4->lines[VAR_4->numLines][2] = VAR_7;
    VAR_4->lines[VAR_4->numLines][3] = VAR_8;
    VAR_4->numLines++;
    if (VAR_4->numLines >= VAR_0)
     break;
    VAR_5 = FUNC_4(VAR_5, '\\');
    if (!VAR_5)
     break;
    *VAR_5++ = '\0';

    VAR_9++;
   }
  }
  FUNC_2( VAR_4 );
  return VAR_2;
 }
 return VAR_1;
}
