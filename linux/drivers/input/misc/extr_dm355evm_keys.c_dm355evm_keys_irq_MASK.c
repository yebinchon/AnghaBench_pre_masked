
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct key_entry {unsigned int keycode; } ;
struct dm355evm_keys {int input; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (int ) ;
 struct key_entry* FUNC_4 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 static u16 VAR_6;
 struct dm355evm_keys *VAR_7 = VAR_5;
 const struct key_entry *VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 u16 VAR_11;





 for (;;) {
  VAR_10 = FUNC_1(VAR_0);
  if (VAR_10 < 0) {
   FUNC_0(VAR_7->dev, "input high err %d\n",
     VAR_10);
   break;
  }
  VAR_11 = VAR_10 << 8;

  VAR_10 = FUNC_1(VAR_1);
  if (VAR_10 < 0) {
   FUNC_0(VAR_7->dev, "input low err %d\n",
     VAR_10);
   break;
  }
  VAR_11 |= VAR_10;
  if (VAR_11 == 0xdead)
   break;
  if (VAR_11 == VAR_6) {
   VAR_6 = 0;
   continue;
  }
  VAR_6 = VAR_11;


  VAR_11 &= ~0x0800;


  VAR_8 = FUNC_4(VAR_7->input, VAR_11);
  VAR_9 = VAR_8 ? VAR_8->keycode : VAR_3;
  FUNC_0(VAR_7->dev,
   "input event 0x%04x--> keycode %d\n",
   VAR_11, VAR_9);


  FUNC_2(VAR_7->input, VAR_9, 1);
  FUNC_3(VAR_7->input);
  FUNC_2(VAR_7->input, VAR_9, 0);
  FUNC_3(VAR_7->input);
 }

 return VAR_2;
}
