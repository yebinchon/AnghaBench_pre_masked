
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val_new ;
typedef int old ;


 int FUNC_0 (int,int,char*,char const*,int,char const*) ;
 int FUNC_1 (int ,int ,char*,char const*,int,char const*) ;
 int FUNC_2 (char const*,void*,size_t*,void*,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, bool VAR_1, bool VAR_2,
    const char *VAR_3, int VAR_4) {
 bool VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(VAR_5);
 FUNC_1(FUNC_2(VAR_0, (void *)&VAR_5, &VAR_6, (void *)&VAR_2,
     sizeof(VAR_2)), 0,
     "%s():%d: Unexpected mallctl failure reading/writing %s", VAR_3,
     VAR_4, VAR_0);
 FUNC_0(VAR_5, VAR_1, "%s():%d: Unexpected %s value", VAR_3,
     VAR_4, VAR_0);
}
