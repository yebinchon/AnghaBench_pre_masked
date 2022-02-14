
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input; } ;
struct wiimote_data {TYPE_1__ extension; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct wiimote_data *VAR_0,
      __u8 VAR_1, __u8 VAR_2,
      __u8 VAR_3, __u8 VAR_4,
      __u8 *VAR_5, __u16 VAR_6,
      __u8 VAR_7)
{
 static const __u8 VAR_8 = 3;

 if (!VAR_1 && VAR_2 == VAR_7) {
  *VAR_5 = VAR_3;
  FUNC_0(VAR_0->extension.input, VAR_6, *VAR_5);
 } else if (VAR_4 != !!*VAR_5) {
  *VAR_5 = VAR_4 ? VAR_8 : 0;
  FUNC_0(VAR_0->extension.input, VAR_6, *VAR_5);
 }
}
