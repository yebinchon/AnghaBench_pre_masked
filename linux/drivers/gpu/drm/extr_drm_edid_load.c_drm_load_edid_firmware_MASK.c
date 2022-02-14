
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_connector {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct edid* FUNC_0 (int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 struct edid* FUNC_1 (struct drm_connector*,char*,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 char* FUNC_7 (char**,char*) ;

struct edid *FUNC_8(struct drm_connector *VAR_4)
{
 const char *VAR_5 = VAR_4->name;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 struct edid *VAR_12;

 if (VAR_3[0] == '\0')
  return FUNC_0(-VAR_0);
 VAR_9 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);
 VAR_10 = VAR_9;

 while ((VAR_6 = FUNC_7(&VAR_10, ","))) {
  VAR_8 = FUNC_4(VAR_6, ':');
  if (VAR_8 != ((void*)0)) {
   if (FUNC_6(VAR_5, VAR_6, VAR_8 - VAR_6))
    continue;
   VAR_6 = VAR_8 + 1;
   break;
  }

  if (*VAR_6 != '\0')
   VAR_11 = VAR_6;
 }

 if (!VAR_6) {
  if (!VAR_11) {
   FUNC_2(VAR_9);
   return FUNC_0(-VAR_0);
  }
  VAR_6 = VAR_11;
 }

 VAR_7 = VAR_6 + FUNC_5(VAR_6) - 1;
 if (*VAR_7 == '\n')
  *VAR_7 = '\0';

 VAR_12 = FUNC_1(VAR_4, VAR_6, VAR_5);
 FUNC_2(VAR_9);

 return VAR_12;
}
