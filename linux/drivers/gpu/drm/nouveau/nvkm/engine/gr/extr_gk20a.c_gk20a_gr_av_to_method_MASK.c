
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gk20a_fw_av {int addr; int data; } ;
struct gf100_gr_pack {scalar_t__ type; struct gf100_gr_init* init; } ;
struct gf100_gr_init {int count; int pitch; int data; scalar_t__ addr; } ;
struct gf100_gr_fuc {int size; scalar_t__ data; } ;
struct gf100_gr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gf100_gr*,char const*,struct gf100_gr_fuc*) ;
 int FUNC_1 (struct gf100_gr_fuc*) ;
 int FUNC_2 (struct gf100_gr_pack*) ;
 struct gf100_gr_pack* FUNC_3 (int) ;

int
FUNC_4(struct gf100_gr *VAR_2, const char *VAR_3,
        struct gf100_gr_pack **VAR_4)
{
 struct gf100_gr_fuc VAR_5;
 struct gf100_gr_init *VAR_6;
 struct gf100_gr_pack *VAR_7;

 static const unsigned int VAR_8 = 16;
 u32 VAR_9 = 0, VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_2, VAR_3, &VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_11 = (VAR_5.size / sizeof(struct gk20a_fw_av));

 VAR_7 = FUNC_3((sizeof(*VAR_7) * VAR_8) +
         (sizeof(*VAR_6) * (VAR_11 + 1)));
 if (!VAR_7) {
  VAR_12 = -VAR_0;
  goto end;
 }

 VAR_6 = (void *)(VAR_7 + VAR_8);

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  struct gf100_gr_init *VAR_14 = &VAR_6[VAR_13];
  struct gk20a_fw_av *VAR_15 = &((struct gk20a_fw_av *)VAR_5.data)[VAR_13];
  u32 VAR_16 = VAR_15->addr & 0xffff;
  u32 VAR_17 = (VAR_15->addr & 0xffff0000) >> 14;

  if (VAR_10 != VAR_16) {
   VAR_7[VAR_9].init = VAR_14;
   VAR_7[VAR_9].type = VAR_16;
   VAR_10 = VAR_16;
   if (++VAR_9 >= VAR_8) {
    FUNC_2(VAR_7);
    VAR_12 = -VAR_1;
    goto end;
   }
  }

  VAR_14->addr = VAR_17;
  VAR_14->data = VAR_15->data;
  VAR_14->count = 1;
  VAR_14->pitch = 1;
 }

 *VAR_4 = VAR_7;

end:
 FUNC_1(&VAR_5);
 return VAR_12;
}
