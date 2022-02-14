
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int connector_type; } ;
struct drm_cmdline_mode {int interlace; int margins; void* force; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(const char *VAR_7, int VAR_8,
     bool VAR_9,
     const struct drm_connector *VAR_10,
     struct drm_cmdline_mode *VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  switch (VAR_7[VAR_12]) {
  case 'i':
   if (VAR_9)
    return -VAR_6;

   VAR_11->interlace = 1;
   break;
  case 'm':
   if (VAR_9)
    return -VAR_6;

   VAR_11->margins = 1;
   break;
  case 'D':
   if (VAR_11->force != VAR_3)
    return -VAR_6;

   if ((VAR_10->connector_type != VAR_4) &&
       (VAR_10->connector_type != VAR_5))
    VAR_11->force = VAR_1;
   else
    VAR_11->force = VAR_2;
   break;
  case 'd':
   if (VAR_11->force != VAR_3)
    return -VAR_6;

   VAR_11->force = VAR_0;
   break;
  case 'e':
   if (VAR_11->force != VAR_3)
    return -VAR_6;

   VAR_11->force = VAR_1;
   break;
  default:
   return -VAR_6;
  }
 }

 return 0;
}
