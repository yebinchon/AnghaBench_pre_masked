
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ts; } ;
struct TYPE_3__ {int (* ts ) (int const*,int,int *,int ,int *,int *) ;} ;
struct dvb_demux_feed {int cc; int peslen; int buffer_flags; TYPE_2__ feed; TYPE_1__ cb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct dvb_demux_feed*,int ) ;
 int FUNC_3 (int const*,int,int *,int ,int *,int *) ;

__attribute__((used)) static inline int FUNC_4(struct dvb_demux_feed *VAR_1,
        const u8 *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 int VAR_5;
 u8 VAR_6;

 if (VAR_3 == 0)
  return -1;

 VAR_4 = 188 - VAR_3;

 VAR_6 = VAR_2[3] & 0x0f;
 VAR_5 = ((VAR_1->cc + 1) & 0x0f) == VAR_6;
 VAR_1->cc = VAR_6;
 if (!VAR_5) {
  FUNC_2(VAR_1, VAR_0);
  FUNC_0("missed packet: %d instead of %d!\n",
      VAR_6, (VAR_1->cc + 1) & 0x0f);
 }

 if (VAR_2[1] & 0x40)
  VAR_1->peslen = 0xfffa;

 VAR_1->peslen += VAR_3;

 return VAR_1->cb.ts(&VAR_2[VAR_4], VAR_3, ((void*)0), 0, &VAR_1->feed.ts,
      &VAR_1->buffer_flags);
}
