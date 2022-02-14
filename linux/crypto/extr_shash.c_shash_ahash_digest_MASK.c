
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct scatterlist {unsigned int offset; int length; } ;
struct ahash_request {unsigned int nbytes; int result; struct scatterlist* src; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct shash_desc*,void*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct shash_desc*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct ahash_request*,struct shash_desc*) ;

int FUNC_7(struct ahash_request *VAR_1, struct shash_desc *VAR_2)
{
 unsigned int VAR_3 = VAR_1->nbytes;
 struct scatterlist *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_3 &&
     (VAR_4 = VAR_1->src, VAR_5 = VAR_4->offset,
      VAR_3 <= FUNC_4(VAR_4->length, ((unsigned int)(VAR_0)) - VAR_5))) {
  void *VAR_7;

  VAR_7 = FUNC_2(FUNC_5(VAR_4));
  VAR_6 = FUNC_0(VAR_2, VAR_7 + VAR_5, VAR_3,
       VAR_1->result);
  FUNC_3(VAR_7);
 } else
  VAR_6 = FUNC_1(VAR_2) ?:
        FUNC_6(VAR_1, VAR_2);

 return VAR_6;
}
