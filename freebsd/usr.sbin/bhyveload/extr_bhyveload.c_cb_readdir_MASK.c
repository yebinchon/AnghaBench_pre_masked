
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct dirent {size_t d_namlen; int d_name; int d_type; int d_fileno; } ;
struct TYPE_2__ {int dir; } ;
struct cb_file {TYPE_1__ cf_u; int cf_isdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;
 struct dirent* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, void *VAR_3, uint32_t *VAR_4, uint8_t *VAR_5,
    size_t *VAR_6, char *VAR_7)
{
 struct cb_file *VAR_8 = VAR_3;
 struct dirent *VAR_9;

 if (!VAR_8->cf_isdir)
  return (VAR_0);

 VAR_9 = FUNC_1(VAR_8->cf_u.dir);
 if (!VAR_9)
  return (VAR_1);





 *VAR_4 = VAR_9->d_fileno;
 *VAR_5 = VAR_9->d_type;
 *VAR_6 = VAR_9->d_namlen;
 FUNC_0(VAR_7, VAR_9->d_name, VAR_9->d_namlen);
 VAR_7[VAR_9->d_namlen] = 0;

 return (0);
}
