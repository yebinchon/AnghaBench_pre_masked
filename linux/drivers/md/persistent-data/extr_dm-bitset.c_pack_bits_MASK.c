
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct packer_context {int (* fn ) (int,int*,int ) ;int context; scalar_t__ nr_bits; } ;
typedef int __le64 ;


 int FUNC_0 (unsigned int,unsigned long*) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (unsigned int,unsigned long*) ;
 int FUNC_4 (int,int*,int ) ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_0, void *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct packer_context *VAR_4 = VAR_2;
 unsigned VAR_5, VAR_6 = FUNC_2(64u, VAR_4->nr_bits - (VAR_0 * 64));
 uint64_t VAR_7 = 0;
 bool VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_3 = VAR_4->fn(VAR_0 * 64 + VAR_5, &VAR_8, VAR_4->context);
  if (VAR_3)
   return VAR_3;

  if (VAR_8)
   FUNC_3(VAR_5, (unsigned long *) &VAR_7);
  else
   FUNC_0(VAR_5, (unsigned long *) &VAR_7);
 }

 *((__le64 *) VAR_1) = FUNC_1(VAR_7);

 return 0;
}
