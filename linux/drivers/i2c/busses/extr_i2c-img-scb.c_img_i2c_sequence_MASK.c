
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct img_i2c {int at_slave_event; int at_t_done; size_t at_cur_cmd; unsigned int line_status; int* seq; } ;


 size_t FUNC_0 (unsigned int const*) ;





 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_2 ;





 int VAR_3 ;
 int FUNC_2 (struct img_i2c*,int,int) ;
 int FUNC_3 (struct img_i2c*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct img_i2c *VAR_4, u32 VAR_5)
{
 static const unsigned int VAR_6[] = {
  [136] = 129,
  [137] = 131,
  [134] = 132 | 130,
  [133] = 131,
  [135] = 128,
 };
 int VAR_7 = -1;
 u8 VAR_8 = 0x00;

 if (VAR_5 & VAR_0)
  VAR_4->at_slave_event = 1;
 if (VAR_5 & VAR_1)
  VAR_4->at_t_done = 1;

 if (!VAR_4->at_slave_event || !VAR_4->at_t_done)
  return 0;


 if (VAR_4->at_cur_cmd >= 0 &&
     VAR_4->at_cur_cmd < FUNC_0(VAR_6)) {
  unsigned int VAR_9 = VAR_6[VAR_4->at_cur_cmd];

  if (VAR_9) {
   VAR_9 |= VAR_2;
   if (!(VAR_4->line_status & VAR_9))
    return 0;
  }
 }


 VAR_7 = *VAR_4->seq;

 if (!VAR_7) {
  FUNC_3(VAR_4, VAR_3, 0);
  return FUNC_1(0);
 }

 if (VAR_7 == 137) {
  ++VAR_4->seq;
  VAR_8 = *VAR_4->seq;
 }
 ++VAR_4->seq;
 FUNC_2(VAR_4, VAR_7, VAR_8);

 return 0;
}
