
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct mapinfo {char* start; scalar_t__ mapoff; scalar_t__ maxoff; int maplen; int fd; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (struct mapinfo*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct mapinfo*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_1, const char *VAR_2, off_t VAR_3, struct stat *VAR_4)
{
 struct mapinfo VAR_5;
 off_t VAR_6, VAR_7;
 int VAR_8;

 if (!(VAR_7 = VAR_4->st_size))
  return;
 VAR_5.start = ((void*)0);
 VAR_5.fd = FUNC_1(VAR_1);
 VAR_5.mapoff = VAR_5.maxoff = VAR_7;





 VAR_6 = VAR_7 - 2;
 while (VAR_6 >= 0) {
  if (VAR_6 < VAR_5.mapoff && FUNC_4(&VAR_5, VAR_6) != 0) {
   FUNC_3(VAR_2);
   return;
  }
  for (VAR_8 = VAR_6 - VAR_5.mapoff; VAR_8 >= 0; VAR_8--)
   if (VAR_5.start[VAR_8] == '\n' && --VAR_3 == 0)
    break;

  VAR_6 = VAR_5.mapoff + VAR_8;
  if (VAR_8 >= 0)
   break;
 }
 VAR_6++;
 if (FUNC_5(&VAR_5, VAR_6, VAR_7 - VAR_6) != 0) {
  FUNC_3(VAR_2);
  FUNC_0(1);
 }


 if (FUNC_2(VAR_1, VAR_4->st_size, VAR_0) == -1) {
  FUNC_3(VAR_2);
  return;
 }
 if (VAR_5.start != ((void*)0) && FUNC_6(VAR_5.start, VAR_5.maplen)) {
  FUNC_3(VAR_2);
  return;
 }
}
