
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct bnxt_qplib_rcfw {int cmdq_depth; int cmdq_bitmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt_qplib_rcfw *VAR_2, u16 VAR_3)
{
 u32 VAR_4 = VAR_1;
 u16 VAR_5;

 VAR_5 = VAR_3 % VAR_2->cmdq_depth;
 if (!FUNC_2(VAR_5, VAR_2->cmdq_bitmap))
  goto done;
 do {
  FUNC_1(1);
  FUNC_0((unsigned long)VAR_2);
 } while (FUNC_2(VAR_5, VAR_2->cmdq_bitmap) && --VAR_4);
done:
 return VAR_4 ? 0 : -VAR_0;
}
