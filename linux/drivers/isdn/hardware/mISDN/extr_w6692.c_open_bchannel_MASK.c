
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct w6692_hw {TYPE_1__* bc; } ;
struct TYPE_6__ {int channel; } ;
struct channel_req {scalar_t__ protocol; TYPE_2__* ch; TYPE_3__ adr; } ;
struct TYPE_5__ {scalar_t__ protocol; } ;
struct bchannel {TYPE_2__ ch; int Flags; } ;
struct TYPE_4__ {struct bchannel bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct w6692_hw *VAR_4, struct channel_req *VAR_5)
{
 struct bchannel *VAR_6;

 if (VAR_5->adr.channel == 0 || VAR_5->adr.channel > 2)
  return -VAR_1;
 if (VAR_5->protocol == VAR_3)
  return -VAR_1;
 VAR_6 = &VAR_4->bc[VAR_5->adr.channel - 1].bch;
 if (FUNC_0(VAR_2, &VAR_6->Flags))
  return -VAR_0;
 VAR_6->ch.protocol = VAR_5->protocol;
 VAR_5->ch = &VAR_6->ch;
 return 0;
}
