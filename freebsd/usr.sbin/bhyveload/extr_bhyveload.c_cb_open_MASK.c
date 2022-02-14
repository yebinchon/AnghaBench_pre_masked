
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fd; int dir; } ;
struct TYPE_4__ {int st_mode; int st_size; } ;
struct cb_file {int cf_isdir; TYPE_1__ cf_u; TYPE_2__ cf_stat; int cf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct cb_file*) ;
 int VAR_5 ;
 struct cb_file* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,TYPE_2__*) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(void *VAR_6, const char *VAR_7, void **VAR_8)
{
 struct cb_file *VAR_9;
 char VAR_10[VAR_3];

 if (!VAR_5)
  return (VAR_1);

 FUNC_8(VAR_10, VAR_5, VAR_3);
 if (VAR_10[FUNC_9(VAR_10) - 1] == '/')
  VAR_10[FUNC_9(VAR_10) - 1] = 0;
 FUNC_7(VAR_10, VAR_7, VAR_3);
 VAR_9 = FUNC_3(sizeof(struct cb_file));
 if (FUNC_6(VAR_10, &VAR_9->cf_stat) < 0) {
  FUNC_2(VAR_9);
  return (VAR_4);
 }

 VAR_9->cf_size = VAR_9->cf_stat.st_size;
 if (FUNC_0(VAR_9->cf_stat.st_mode)) {
  VAR_9->cf_isdir = 1;
  VAR_9->cf_u.dir = FUNC_5(VAR_10);
  if (!VAR_9->cf_u.dir)
   goto out;
  *VAR_8 = VAR_9;
  return (0);
 }
 if (FUNC_1(VAR_9->cf_stat.st_mode)) {
  VAR_9->cf_isdir = 0;
  VAR_9->cf_u.fd = FUNC_4(VAR_10, VAR_2);
  if (VAR_9->cf_u.fd < 0)
   goto out;
  *VAR_8 = VAR_9;
  return (0);
 }

out:
 FUNC_2(VAR_9);
 return (VAR_0);
}
