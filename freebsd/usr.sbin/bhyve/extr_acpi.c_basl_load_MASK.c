
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vmctx {int dummy; } ;
struct stat {int st_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 void* FUNC_1 (struct vmctx*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int,void*,int ) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_3, int VAR_4, uint64_t VAR_5)
{
 struct stat VAR_6;
 void *VAR_7;

 if (FUNC_0(VAR_4, &VAR_6) < 0)
  return (VAR_2);

 VAR_7 = FUNC_1(VAR_3, VAR_1 + VAR_5, VAR_6.st_size);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 if (FUNC_2(VAR_4, VAR_7, VAR_6.st_size) < 0)
  return (VAR_2);

 return (0);
}
