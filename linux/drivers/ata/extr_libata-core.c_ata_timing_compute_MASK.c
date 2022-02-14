
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_timing {int cycle; int cyc8b; scalar_t__ act8b; scalar_t__ rec8b; scalar_t__ active; scalar_t__ recover; } ;
struct ata_device {int* id; unsigned short pio_mode; } ;
typedef int p ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 int FUNC_0 (int const*) ;
 struct ata_timing* FUNC_1 (unsigned short) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int) ;
 int FUNC_3 (struct ata_timing*,struct ata_timing*,int,int) ;
 int FUNC_4 (struct ata_timing*,struct ata_timing const*,int) ;
 int FUNC_5 (struct ata_timing*,int ,int) ;

int FUNC_6(struct ata_device *VAR_16, unsigned short VAR_17,
         struct ata_timing *VAR_18, int VAR_19, int VAR_20)
{
 const u16 *VAR_21 = VAR_16->id;
 const struct ata_timing *VAR_22;
 struct ata_timing VAR_23;





 if (!(VAR_22 = FUNC_1(VAR_17)))
  return -VAR_7;

 FUNC_4(VAR_18, VAR_22, sizeof(*VAR_22));






 if (VAR_21[VAR_3] & 2) {
  FUNC_5(&VAR_23, 0, sizeof(VAR_23));

  if (VAR_17 >= VAR_10 && VAR_17 < VAR_15) {
   if (VAR_17 <= VAR_11)
    VAR_23.cycle = VAR_23.cyc8b = VAR_21[VAR_1];
   else if ((VAR_17 <= VAR_12) ||
     (VAR_17 == VAR_13 && !FUNC_0(VAR_21)))
    VAR_23.cycle = VAR_23.cyc8b = VAR_21[VAR_2];
  } else if (VAR_17 >= VAR_8 && VAR_17 <= VAR_9)
   VAR_23.cycle = VAR_21[VAR_0];

  FUNC_2(&VAR_23, VAR_18, VAR_18, VAR_6 | VAR_5);
 }





 FUNC_3(VAR_18, VAR_18, VAR_19, VAR_20);







 if (VAR_17 > VAR_14) {
  FUNC_6(VAR_16, VAR_16->pio_mode, &VAR_23, VAR_19, VAR_20);
  FUNC_2(&VAR_23, VAR_18, VAR_18, VAR_4);
 }





 if (VAR_18->act8b + VAR_18->rec8b < VAR_18->cyc8b) {
  VAR_18->act8b += (VAR_18->cyc8b - (VAR_18->act8b + VAR_18->rec8b)) / 2;
  VAR_18->rec8b = VAR_18->cyc8b - VAR_18->act8b;
 }

 if (VAR_18->active + VAR_18->recover < VAR_18->cycle) {
  VAR_18->active += (VAR_18->cycle - (VAR_18->active + VAR_18->recover)) / 2;
  VAR_18->recover = VAR_18->cycle - VAR_18->active;
 }




 if (VAR_18->active + VAR_18->recover > VAR_18->cycle)
  VAR_18->cycle = VAR_18->active + VAR_18->recover;

 return 0;
}
