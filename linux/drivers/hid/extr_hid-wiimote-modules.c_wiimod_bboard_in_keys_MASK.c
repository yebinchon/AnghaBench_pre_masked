
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input; } ;
struct wiimote_data {TYPE_1__ extension; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_1, const __u8 *VAR_2)
{
 FUNC_0(VAR_1->extension.input, VAR_0,
    !!(VAR_2[1] & 0x08));
 FUNC_1(VAR_1->extension.input);
}
