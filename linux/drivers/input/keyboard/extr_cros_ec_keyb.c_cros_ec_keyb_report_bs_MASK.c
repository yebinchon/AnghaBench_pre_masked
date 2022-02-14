
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct cros_ec_keyb {struct input_dev* bs_idev; } ;
struct cros_ec_bs_map {unsigned int ev_type; int inverted; int bit; int code; } ;


 int FUNC_0 (struct cros_ec_bs_map*) ;
 int FUNC_1 (int ) ;
 struct cros_ec_bs_map* VAR_0 ;
 int FUNC_2 (struct input_dev*,unsigned int,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct cros_ec_keyb *VAR_1,
       unsigned int VAR_2, u32 VAR_3)

{
 struct input_dev *VAR_4 = VAR_1->bs_idev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  const struct cros_ec_bs_map *VAR_6 = &VAR_0[VAR_5];

  if (VAR_6->ev_type != VAR_2)
   continue;

  FUNC_2(VAR_4, VAR_2, VAR_6->code,
       !!(VAR_3 & FUNC_1(VAR_6->bit)) ^ VAR_6->inverted);
 }
 FUNC_3(VAR_4);
}
