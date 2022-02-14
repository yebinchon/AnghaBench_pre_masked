
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mtlocate {int dest_type; int block_address_mode; int partition; int flags; int logical_id; } ;
typedef int mtl ;
typedef int mt_locate_dest_type ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtlocate*,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int,int ,struct mtlocate*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_7(int VAR_6, char **VAR_7, int VAR_8, const char *VAR_9)
{
 struct mtlocate VAR_10;
 uint64_t VAR_11 = 0;
 mt_locate_dest_type VAR_12 = 130;
 int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 int64_t VAR_16 = 0;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 int VAR_21, VAR_22;

 VAR_22 = 0;
 FUNC_0(&VAR_10, sizeof(VAR_10));

 while ((VAR_21 = FUNC_3(VAR_6, VAR_7, "b:eEf:ip:s:")) != -1) {
  switch (VAR_21) {
  case 'b':

   VAR_11 = FUNC_6(VAR_5, ((void*)0), 0);
   VAR_12 = 129;
   VAR_17 = 1;
   break;
  case 'e':

   VAR_13 = 1;
   VAR_12 = 131;
   break;
  case 'E':





   VAR_14 = 1;
   break;
  case 'f':

   VAR_11 = FUNC_6(VAR_5, ((void*)0), 0);
   VAR_12 = 130;
   VAR_19 = 1;
   break;
  case 'i':





   VAR_15 = 1;
   break;
  case 'p':



   VAR_16 = FUNC_5(VAR_5, ((void*)0), 0);
   VAR_18 = 1;
   break;
  case 's':

   VAR_11 = FUNC_6(VAR_5, ((void*)0), 0);
   VAR_12 = 128;
   VAR_20 = 1;
   break;
  default:
   break;
  }
 }





 if ((VAR_17 + VAR_19 + VAR_13 + VAR_20) != 1)
  FUNC_2(1, "You must specify only one of -b, -f, -e, or -s");

 VAR_10.dest_type = VAR_12;
 switch (VAR_12) {
 case 129:
 case 130:
 case 128:
  VAR_10.logical_id = VAR_11;
  break;
 case 131:
  break;
 }

 if (VAR_15 != 0)
  VAR_10.flags |= VAR_4;

 if (VAR_18 != 0) {
  VAR_10.flags |= VAR_3;
  VAR_10.partition = VAR_16;
 }

 if (VAR_14 != 0)
  VAR_10.block_address_mode = VAR_1;
 else
  VAR_10.block_address_mode = VAR_2;

 if (FUNC_4(VAR_8, VAR_0, &VAR_10) == -1)
  FUNC_1(1, "MTIOCEXTLOCATE ioctl failed on %s", VAR_9);

 return (VAR_22);
}
