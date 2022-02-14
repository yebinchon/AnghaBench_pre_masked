
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {long length; long offset; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (long,long) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_3(struct scatterlist *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(FUNC_2(VAR_2)) << VAR_1;
 long VAR_4 = VAR_2->length;

 if ((VAR_2->offset | VAR_4) & (8UL - 1))
  return -VAR_0;

 return FUNC_1(VAR_3 + VAR_2->offset, VAR_4);
}
