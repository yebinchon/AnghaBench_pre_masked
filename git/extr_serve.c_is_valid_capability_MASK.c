
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol_capability {scalar_t__ (* advertise ) (int ,int *) ;} ;


 struct protocol_capability* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const char *VAR_1)
{
 const struct protocol_capability *VAR_2 = FUNC_0(VAR_1);

 return VAR_2 && VAR_2->advertise(VAR_0, ((void*)0));
}
