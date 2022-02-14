
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_type {int size; int sectrac; int heads; int tracks; int secsize; } ;
typedef enum fd_drivetype { ____Placeholder_fd_drivetype } fd_drivetype ;







 struct fd_type* VAR_0 ;
 struct fd_type* VAR_1 ;
 struct fd_type* VAR_2 ;
 struct fd_type* VAR_3 ;
 struct fd_type* VAR_4 ;
 struct fd_type* VAR_5 ;

struct fd_type *
FUNC_0(int VAR_6, enum fd_drivetype VAR_7)
{
 int VAR_8, VAR_9;
 struct fd_type *VAR_10;

 switch (VAR_7) {
 default:
  return (0);

 case 129:
  VAR_10 = VAR_3;
  VAR_9 = sizeof VAR_3 / sizeof(struct fd_type);
  break;

 case 128:
  VAR_10 = VAR_4;
  VAR_9 = sizeof VAR_4 / sizeof(struct fd_type);
  break;

 case 132:
  VAR_10 = VAR_0;
  VAR_9 = sizeof VAR_0 / sizeof(struct fd_type);
  break;

 case 131:
  VAR_10 = VAR_1;
  VAR_9 = sizeof VAR_1 / sizeof(struct fd_type);
  break;

 case 130:
  VAR_10 = VAR_2;
  VAR_9 = sizeof VAR_2 / sizeof(struct fd_type);
  break;
 }

 if (VAR_6 == -1)
  return VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_10++) {
  VAR_10->size = VAR_10->sectrac * VAR_10->heads * VAR_10->tracks;
  if (((128 << VAR_10->secsize) * VAR_10->size / 1024) == VAR_6)
   return (VAR_10);
 }
 return (0);
}
