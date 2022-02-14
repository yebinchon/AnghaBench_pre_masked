
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct edp_aux {scalar_t__ base; } ;
struct drm_dp_aux_msg {int request; int* buffer; int size; int address; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct edp_aux *VAR_10, struct drm_dp_aux_msg *VAR_11)
{
 u32 VAR_12[4];
 u32 VAR_13, VAR_14;
 bool VAR_15 = VAR_11->request & (VAR_3 & VAR_2);
 bool VAR_16 = VAR_11->request & (VAR_1 & VAR_2);
 u8 *VAR_17 = VAR_11->buffer;
 int VAR_18;

 if (VAR_16)
  VAR_14 = 4;
 else
  VAR_14 = VAR_11->size + 4;




 if (VAR_14 > VAR_0)
  return -VAR_7;


 VAR_12[0] = (VAR_11->address >> 16) & 0xf;
 if (VAR_16)
  VAR_12[0] |= FUNC_0(4);

 VAR_12[1] = (VAR_11->address >> 8) & 0xff;
 VAR_12[2] = VAR_11->address & 0xff;
 VAR_12[3] = (VAR_11->size - 1) & 0xff;

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  VAR_13 = (VAR_18 < 4) ? VAR_12[VAR_18] : VAR_17[VAR_18 - 4];
  VAR_13 = FUNC_1(VAR_13);
  if (VAR_18 == 0)
   VAR_13 |= VAR_4;
  FUNC_2(VAR_10->base + VAR_8, VAR_13);
 }

 VAR_13 = 0;
 if (!VAR_15)
  VAR_13 |= VAR_6;

 VAR_13 |= VAR_5;
 FUNC_2(VAR_10->base + VAR_9, VAR_13);

 return 0;
}
