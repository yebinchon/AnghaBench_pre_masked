
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct drm_cmdline_mode {int specified; int bpp_specified; int refresh_specified; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,char**,struct drm_cmdline_mode*) ;
 int FUNC_1 (char const*,int,int,struct drm_connector const*,struct drm_cmdline_mode*) ;
 int FUNC_2 (char*,int,struct drm_connector const*,struct drm_cmdline_mode*) ;
 int FUNC_3 (char*,char**,struct drm_cmdline_mode*) ;
 int FUNC_4 (char const*,unsigned int,int,struct drm_connector const*,struct drm_cmdline_mode*) ;
 int FUNC_5 (char const*,unsigned int) ;
 char* VAR_1 ;
 int FUNC_6 (char const) ;
 char* FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,char const*,unsigned int) ;

bool FUNC_11(const char *VAR_2,
            const struct drm_connector *VAR_3,
            struct drm_cmdline_mode *VAR_4)
{
 const char *VAR_5;
 bool VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11 = 0;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18;






 if (!VAR_2) {
  VAR_4->specified = 0;
  return 0;
 }

 VAR_5 = VAR_2;
 if (!FUNC_6(VAR_5[0]) && VAR_5[0] != 'x') {
  unsigned int VAR_19 = FUNC_9(VAR_5);





  if (VAR_19 == 1) {
   VAR_18 = FUNC_1(VAR_5, VAR_19, 1,
          VAR_3, VAR_4);
   if (!VAR_18)
    return 1;
  }

  VAR_6 = 1;
 }


 VAR_12 = FUNC_8(VAR_5, '-');
 if (VAR_12) {
  VAR_8 = VAR_12 - VAR_5;
  VAR_4->bpp_specified = 1;
 }

 VAR_13 = FUNC_8(VAR_5, '@');
 if (VAR_13) {
  if (VAR_6)
   return 0;

  VAR_9 = VAR_13 - VAR_5;
  VAR_4->refresh_specified = 1;
 }


 VAR_15 = FUNC_8(VAR_5, ',');
 if (VAR_15)
  VAR_10 = VAR_15 - VAR_5;


 if (VAR_12) {
  VAR_11 = VAR_8;
 } else if (VAR_13) {
  VAR_11 = VAR_9;
 } else if (VAR_15) {
  VAR_11 = VAR_10;
 } else {
  VAR_11 = FUNC_9(VAR_5);
  VAR_7 = 1;
 }

 if (VAR_6) {
  if (VAR_11 + 1 > VAR_0)
   return 0;

  if (!FUNC_5(VAR_5, VAR_11))
   return 0;

  FUNC_10(VAR_4->name, VAR_5, VAR_11 + 1);
 } else {
  VAR_18 = FUNC_4(VAR_5, VAR_11,
            VAR_7,
            VAR_3,
            VAR_4);
  if (VAR_18)
   return 0;
 }
 VAR_4->specified = 1;

 if (VAR_12) {
  VAR_18 = FUNC_0(VAR_12, &VAR_16, VAR_4);
  if (VAR_18)
   return 0;
 }

 if (VAR_13) {
  VAR_18 = FUNC_3(VAR_13,
           &VAR_17, VAR_4);
  if (VAR_18)
   return 0;
 }





 if (VAR_12 && VAR_13)
  VAR_14 = FUNC_7(VAR_16, VAR_17);
 else if (VAR_12)
  VAR_14 = VAR_16;
 else if (VAR_13)
  VAR_14 = VAR_17;

 if (VAR_14 &&
     VAR_14 != VAR_15) {
  int VAR_20 = FUNC_9(VAR_5) - (VAR_14 - VAR_5);

  VAR_18 = FUNC_1(VAR_14, VAR_20, 0,
         VAR_3, VAR_4);
  if (VAR_18)
   return 0;
 }

 if (VAR_15) {
  int VAR_21 = FUNC_9(VAR_5) - (VAR_15 - VAR_5);

  VAR_18 = FUNC_2(VAR_15, VAR_21,
           VAR_3, VAR_4);
  if (VAR_18)
   return 0;
 }

 return 1;
}
