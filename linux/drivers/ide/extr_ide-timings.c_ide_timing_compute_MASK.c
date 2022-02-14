
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ide_timing {int cycle; int cyc8b; scalar_t__ act8b; scalar_t__ rec8b; scalar_t__ active; scalar_t__ recover; } ;
typedef int p ;
struct TYPE_3__ {int* id; scalar_t__ pio_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int*) ;
 struct ide_timing* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int) ;
 int FUNC_3 (struct ide_timing*,struct ide_timing*,int,int) ;
 int FUNC_4 (struct ide_timing*,int ,int) ;

int FUNC_5(ide_drive_t *VAR_15, u8 VAR_16,
         struct ide_timing *VAR_17, int VAR_18, int VAR_19)
{
 u16 *VAR_20 = VAR_15->id;
 struct ide_timing *VAR_21, VAR_22;




 VAR_21 = FUNC_1(VAR_16);
 if (VAR_21 == ((void*)0))
  return -VAR_4;




 *VAR_17 = *VAR_21;





 if (VAR_20[VAR_3] & 2) {
  FUNC_4(&VAR_22, 0, sizeof(VAR_22));

  if (VAR_16 >= VAR_10 && VAR_16 < VAR_14) {
   if (VAR_16 <= VAR_11)
    VAR_22.cycle = VAR_22.cyc8b = VAR_20[VAR_1];
   else if ((VAR_16 <= VAR_12) ||
     (VAR_16 == VAR_13 && !FUNC_0(VAR_20)))
    VAR_22.cycle = VAR_22.cyc8b = VAR_20[VAR_2];
  } else if (VAR_16 >= VAR_8 && VAR_16 <= VAR_9)
   VAR_22.cycle = VAR_20[VAR_0];

  FUNC_2(&VAR_22, VAR_17, VAR_17, VAR_7 | VAR_6);
 }




 FUNC_3(VAR_17, VAR_17, VAR_18, VAR_19);






 if (VAR_16 >= VAR_14) {
  FUNC_5(VAR_15, VAR_15->pio_mode, &VAR_22, VAR_18, VAR_19);
  FUNC_2(&VAR_22, VAR_17, VAR_17, VAR_5);
 }




 if (VAR_17->act8b + VAR_17->rec8b < VAR_17->cyc8b) {
  VAR_17->act8b += (VAR_17->cyc8b - (VAR_17->act8b + VAR_17->rec8b)) / 2;
  VAR_17->rec8b = VAR_17->cyc8b - VAR_17->act8b;
 }

 if (VAR_17->active + VAR_17->recover < VAR_17->cycle) {
  VAR_17->active += (VAR_17->cycle - (VAR_17->active + VAR_17->recover)) / 2;
  VAR_17->recover = VAR_17->cycle - VAR_17->active;
 }

 return 0;
}
