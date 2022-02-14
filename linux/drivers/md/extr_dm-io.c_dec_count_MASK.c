
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int count; int error_bits; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct io*) ;
 int FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_3(struct io *VAR_0, unsigned int VAR_1, blk_status_t VAR_2)
{
 if (VAR_2)
  FUNC_2(VAR_1, &VAR_0->error_bits);

 if (FUNC_0(&VAR_0->count))
  FUNC_1(VAR_0);
}
