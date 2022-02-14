
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_2__* set_envelope; TYPE_1__* block_load; } ;
struct ff_envelope {int attack_level; int fade_level; void* fade_length; void* attack_length; } ;
struct TYPE_4__ {void** value; int field; } ;
struct TYPE_3__ {void** value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*,int,void*) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct pidff_device *VAR_7,
          struct ff_envelope *VAR_8)
{
 VAR_7->set_envelope[VAR_3].value[0] =
     VAR_7->block_load[VAR_3].value[0];

 VAR_7->set_envelope[VAR_1].value[0] =
     FUNC_2(VAR_8->attack_level >
     0x7fff ? 0x7fff : VAR_8->attack_level, 0x7fff,
     VAR_7->set_envelope[VAR_1].field);
 VAR_7->set_envelope[VAR_4].value[0] =
     FUNC_2(VAR_8->fade_level >
     0x7fff ? 0x7fff : VAR_8->fade_level, 0x7fff,
     VAR_7->set_envelope[VAR_4].field);

 VAR_7->set_envelope[VAR_2].value[0] = VAR_8->attack_length;
 VAR_7->set_envelope[VAR_5].value[0] = VAR_8->fade_length;

 FUNC_0(VAR_7->hid, "attack %u => %d\n",
  VAR_8->attack_level,
  VAR_7->set_envelope[VAR_1].value[0]);

 FUNC_1(VAR_7->hid, VAR_7->reports[VAR_6],
   VAR_0);
}
