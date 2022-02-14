
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjail {int dummy; } ;


 struct cfjail** FUNC_0 (char const*,int *,int ,int,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct cfjail *
FUNC_1(const char *VAR_3)
{
 struct cfjail **VAR_4;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2, sizeof(struct cfjail *),
     VAR_0);
 return VAR_4 ? *VAR_4 : ((void*)0);
}
