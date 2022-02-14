
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_2)
{
 int VAR_3;

 FUNC_1("testing %s\n", VAR_2);

 VAR_3 = FUNC_0(VAR_2, VAR_2, 0, 0);

 if (VAR_1 && VAR_3 == -VAR_0)
  VAR_3 = 0;
 return VAR_3;
}
