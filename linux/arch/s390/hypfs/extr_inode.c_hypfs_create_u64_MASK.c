
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,char const*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,char*,unsigned long long) ;

struct dentry *FUNC_7(struct dentry *VAR_5,
    const char *VAR_6, __u64 VAR_7)
{
 char *VAR_8;
 char VAR_9[VAR_4];
 struct dentry *VAR_10;

 FUNC_6(VAR_9, VAR_4, "%llu\n", (unsigned long long int)VAR_7);
 VAR_8 = FUNC_5(VAR_9, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);
 VAR_10 =
     FUNC_3(VAR_5, VAR_6, VAR_8, VAR_3 | VAR_2);
 if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_8);
  return FUNC_0(-VAR_0);
 }
 FUNC_2(VAR_10);
 return VAR_10;
}
