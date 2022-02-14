
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {unsigned int osr; int memaccessloops; int memblocks; int memblocksize; void* mem; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rand_data*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct rand_data*) ;

struct rand_data *FUNC_3(unsigned int VAR_5,
            unsigned int VAR_6)
{
 struct rand_data *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct rand_data));
 if (!VAR_7)
  return ((void*)0);

 if (!(VAR_6 & VAR_0)) {



  VAR_7->mem = FUNC_1(VAR_4);
  if (!VAR_7->mem) {
   FUNC_2(VAR_7);
   return ((void*)0);
  }
  VAR_7->memblocksize = VAR_3;
  VAR_7->memblocks = VAR_2;
  VAR_7->memaccessloops = VAR_1;
 }


 if (0 == VAR_5)
  VAR_5 = 1;
 VAR_7->osr = VAR_5;


 FUNC_0(VAR_7);

 return VAR_7;
}
