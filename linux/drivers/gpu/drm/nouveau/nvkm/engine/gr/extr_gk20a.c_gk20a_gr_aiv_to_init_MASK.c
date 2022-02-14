
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gk20a_fw_aiv {int data; int addr; } ;
struct gf100_gr_pack {struct gf100_gr_init* init; } ;
struct gf100_gr_init {int count; int pitch; int data; int addr; } ;
struct gf100_gr_fuc {int size; scalar_t__ data; } ;
struct gf100_gr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gf100_gr*,char const*,struct gf100_gr_fuc*) ;
 int FUNC_1 (struct gf100_gr_fuc*) ;
 struct gf100_gr_pack* FUNC_2 (int) ;

int
FUNC_3(struct gf100_gr *VAR_1, const char *VAR_2,
       struct gf100_gr_pack **VAR_3)
{
 struct gf100_gr_fuc VAR_4;
 struct gf100_gr_init *VAR_5;
 struct gf100_gr_pack *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = (VAR_4.size / sizeof(struct gk20a_fw_aiv));
 VAR_6 = FUNC_2((sizeof(*VAR_6) * 2) + (sizeof(*VAR_5) * (VAR_7 + 1)));
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto end;
 }

 VAR_5 = (void *)(VAR_6 + 2);
 VAR_6[0].init = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  struct gf100_gr_init *VAR_10 = &VAR_5[VAR_9];
  struct gk20a_fw_aiv *VAR_11 = &((struct gk20a_fw_aiv *)VAR_4.data)[VAR_9];

  VAR_10->addr = VAR_11->addr;
  VAR_10->data = VAR_11->data;
  VAR_10->count = 1;
  VAR_10->pitch = 1;
 }

 *VAR_3 = VAR_6;

end:
 FUNC_1(&VAR_4);
 return VAR_8;
}
