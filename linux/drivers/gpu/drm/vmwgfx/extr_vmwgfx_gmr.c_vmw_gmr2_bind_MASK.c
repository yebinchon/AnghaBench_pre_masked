
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vmw_private {int dummy; } ;
struct vmw_piter {int dummy; } ;
typedef int remap_cmd ;
typedef int define_cmd ;
struct TYPE_4__ {int gmrId; unsigned long numPages; int offsetPages; int flags; } ;
typedef TYPE_1__ SVGAFifoCmdRemapGMR2 ;
typedef TYPE_1__ SVGAFifoCmdDefineGMR2 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (struct vmw_private*,int) ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_2 (int*,TYPE_1__*,int) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct vmw_private*,int) ;
 int FUNC_6 (struct vmw_piter*) ;
 int FUNC_7 (struct vmw_piter*) ;

__attribute__((used)) static int FUNC_8(struct vmw_private *VAR_8,
    struct vmw_piter *VAR_9,
    unsigned long VAR_10,
    int VAR_11)
{
 SVGAFifoCmdDefineGMR2 VAR_12;
 SVGAFifoCmdRemapGMR2 VAR_13;
 uint32_t *VAR_14;
 uint32_t *VAR_15;
 uint32_t VAR_16 = sizeof(VAR_12) + sizeof(*VAR_14);
 uint32_t VAR_17 = VAR_10 / VAR_6 + ((VAR_10 % VAR_6) > 0);
 uint32_t VAR_18 = VAR_7 * VAR_10 + (sizeof(VAR_13) + sizeof(*VAR_14)) * VAR_17;
 uint32_t VAR_19 = 0;
 uint32_t VAR_20 = VAR_16 + VAR_18;
 uint32_t VAR_21;

 VAR_15 = VAR_14 = FUNC_1(VAR_8, VAR_20);
 if (FUNC_4(VAR_14 == ((void*)0)))
  return -VAR_0;

 VAR_12.gmrId = VAR_11;
 VAR_12.numPages = VAR_10;

 *VAR_14++ = VAR_2;
 FUNC_2(VAR_14, &VAR_12, sizeof(VAR_12));
 VAR_14 += sizeof(VAR_12) / sizeof(*VAR_14);






 VAR_13.gmrId = VAR_11;
 VAR_13.flags = (VAR_7 > sizeof(*VAR_14)) ?
  VAR_5 : VAR_4;

 while (VAR_10 > 0) {
  unsigned long VAR_22 = FUNC_3(VAR_10, (unsigned long)VAR_6);

  VAR_13.offsetPages = VAR_19;
  VAR_13.numPages = VAR_22;

  *VAR_14++ = VAR_3;
  FUNC_2(VAR_14, &VAR_13, sizeof(VAR_13));
  VAR_14 += sizeof(VAR_13) / sizeof(*VAR_14);

  for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21) {
   if (VAR_7 <= 4)
    *VAR_14 = FUNC_6(VAR_9) >> VAR_1;
   else
    *((uint64_t *)VAR_14) = FUNC_6(VAR_9) >>
     VAR_1;

   VAR_14 += VAR_7 / sizeof(*VAR_14);
   FUNC_7(VAR_9);
  }

  VAR_10 -= VAR_22;
  VAR_19 += VAR_22;
 }

 FUNC_0(VAR_14 != VAR_15 + VAR_20 / sizeof(*VAR_14));

 FUNC_5(VAR_8, VAR_20);

 return 0;
}
