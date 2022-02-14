
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct n2rng_unit {int* control; } ;
struct n2rng {int num_units; int accum_cycles; TYPE_1__* data; struct n2rng_unit* units; } ;
struct TYPE_2__ {int chip_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long FUNC_0 (int*) ;
 int FUNC_1 (struct n2rng*,unsigned long,int,int ) ;

__attribute__((used)) static int FUNC_2(struct n2rng *VAR_13)
{
 int VAR_14, VAR_15;

 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_13->num_units; VAR_14++) {
  struct n2rng_unit *VAR_16 = &VAR_13->units[VAR_14];
  unsigned long VAR_17 = FUNC_0(&VAR_16->control[0]);
  int VAR_18;
  u64 VAR_19, VAR_20;

  if (VAR_13->data->chip_version == 1) {
   VAR_19 = ((VAR_13->accum_cycles << VAR_8) |
         (VAR_5 << VAR_6) |
         VAR_4);
   VAR_20 = VAR_7;
  } else {
   VAR_19 = ((VAR_13->accum_cycles << VAR_12) |
         (VAR_9 << VAR_10) |
         VAR_4);
   VAR_20 = VAR_11;
  }






  for (VAR_18 = 0; VAR_18 < 3; VAR_18++)
   VAR_16->control[VAR_18] = VAR_19 |
    (VAR_18 << VAR_20) |
    (VAR_1 << VAR_18);

  VAR_16->control[3] = VAR_19 |
   (VAR_1 | VAR_2 | VAR_3);

  VAR_15 = FUNC_1(VAR_13, VAR_17, VAR_14,
        VAR_0);
  if (VAR_15)
   break;
 }

 return VAR_15;
}
