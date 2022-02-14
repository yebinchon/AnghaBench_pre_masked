
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pg_state {unsigned int level; scalar_t__ current_flags; unsigned long start_address; scalar_t__ start_pa; scalar_t__ last_pa; TYPE_1__* marker; int seq; } ;
struct TYPE_4__ {scalar_t__ mask; int num; scalar_t__ flag; } ;
struct TYPE_3__ {unsigned long start_address; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pg_state*,unsigned long) ;
 int FUNC_1 (struct pg_state*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct pg_state*,unsigned long) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char) ;

__attribute__((used)) static void FUNC_5(struct pg_state *VAR_3, unsigned long VAR_4,
        unsigned int VAR_5, u64 VAR_6)
{
 u64 VAR_7 = VAR_6 & VAR_2[VAR_5].mask;
 u64 VAR_8 = VAR_6 & VAR_1;


 if (!VAR_3->level) {
  VAR_3->level = VAR_5;
  VAR_3->current_flags = VAR_7;
  VAR_3->start_address = VAR_4;
  VAR_3->start_pa = VAR_8;
  VAR_3->last_pa = VAR_8;
  FUNC_3(VAR_3->seq, "---[ %s ]---\n", VAR_3->marker->name);
 } else if (VAR_7 != VAR_3->current_flags || VAR_5 != VAR_3->level ||
     VAR_4 >= VAR_3->marker[1].start_address ||
     (VAR_8 != VAR_3->last_pa + VAR_0 &&
      (VAR_8 != VAR_3->start_pa || VAR_3->start_pa != VAR_3->last_pa))) {


  if (VAR_3->current_flags) {
   FUNC_2(VAR_3, VAR_4);
   FUNC_0(VAR_3, VAR_4);


   if (VAR_2[VAR_3->level].flag)
    FUNC_1(VAR_3, VAR_2[VAR_3->level].flag,
       VAR_3->current_flags,
       VAR_2[VAR_3->level].num);

   FUNC_4(VAR_3->seq, '\n');
  }





  while (VAR_4 >= VAR_3->marker[1].start_address) {
   VAR_3->marker++;
   FUNC_3(VAR_3->seq, "---[ %s ]---\n", VAR_3->marker->name);
  }
  VAR_3->start_address = VAR_4;
  VAR_3->start_pa = VAR_8;
  VAR_3->last_pa = VAR_8;
  VAR_3->current_flags = VAR_7;
  VAR_3->level = VAR_5;
 } else {
  VAR_3->last_pa = VAR_8;
 }
}
