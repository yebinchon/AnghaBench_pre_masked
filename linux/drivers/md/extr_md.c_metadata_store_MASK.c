
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {int external; int persistent; int major_version; int minor_version; char* metadata_type; int disks; } ;
typedef int ssize_t ;
struct TYPE_3__ {int * name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (char const*,char**,int) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*,char const*,size_t) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static ssize_t
FUNC_8(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;
 int VAR_10;





 VAR_10 = FUNC_3(VAR_4);
 if (VAR_10)
  return VAR_10;
 VAR_10 = -VAR_0;
 if (VAR_4->external && FUNC_6(VAR_5, "external:", 9) == 0)
  ;
 else if (!FUNC_2(&VAR_4->disks))
  goto out_unlock;

 VAR_10 = 0;
 if (FUNC_1(VAR_5, "none")) {
  VAR_4->persistent = 0;
  VAR_4->external = 0;
  VAR_4->major_version = 0;
  VAR_4->minor_version = 90;
  goto out_unlock;
 }
 if (FUNC_6(VAR_5, "external:", 9) == 0) {
  size_t VAR_11 = VAR_6-9;
  if (VAR_11 >= sizeof(VAR_4->metadata_type))
   VAR_11 = sizeof(VAR_4->metadata_type)-1;
  FUNC_7(VAR_4->metadata_type, VAR_5+9, VAR_11);
  VAR_4->metadata_type[VAR_11] = 0;
  if (VAR_11 && VAR_4->metadata_type[VAR_11-1] == '\n')
   VAR_4->metadata_type[--VAR_11] = 0;
  VAR_4->persistent = 0;
  VAR_4->external = 1;
  VAR_4->major_version = 0;
  VAR_4->minor_version = 90;
  goto out_unlock;
 }
 VAR_7 = FUNC_5(VAR_5, &VAR_9, 10);
 VAR_10 = -VAR_1;
 if (VAR_9==VAR_5 || *VAR_9 != '.')
  goto out_unlock;
 VAR_5 = VAR_9+1;
 VAR_8 = FUNC_5(VAR_5, &VAR_9, 10);
 if (VAR_9==VAR_5 || (*VAR_9 && *VAR_9 != '\n') )
  goto out_unlock;
 VAR_10 = -VAR_2;
 if (VAR_7 >= FUNC_0(VAR_3) || VAR_3[VAR_7].name == ((void*)0))
  goto out_unlock;
 VAR_4->major_version = VAR_7;
 VAR_4->minor_version = VAR_8;
 VAR_4->persistent = 1;
 VAR_4->external = 0;
 VAR_10 = 0;
out_unlock:
 FUNC_4(VAR_4);
 return VAR_10 ?: VAR_6;
}
