
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int offset; unsigned int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct scatterlist *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = 0;
 while (VAR_1) {
  FUNC_0(VAR_1->offset);
  FUNC_0(!FUNC_1(VAR_1->length, VAR_0));
  VAR_2 |= VAR_1->length;
  VAR_1 = FUNC_2(VAR_1);
 }

 return VAR_2;
}
