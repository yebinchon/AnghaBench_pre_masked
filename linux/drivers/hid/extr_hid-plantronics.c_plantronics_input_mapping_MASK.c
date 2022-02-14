
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {unsigned long application; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;




 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;

 int FUNC_0 (struct hid_device*,char*,int,unsigned long,...) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_9,
         struct hid_input *VAR_10,
         struct hid_field *VAR_11,
         struct hid_usage *VAR_12,
         unsigned long **VAR_13, int *VAR_14)
{
 unsigned short VAR_15;
 unsigned long VAR_16 = (unsigned long)FUNC_1(VAR_9);


 if (VAR_11->application == VAR_1)
  goto defaulted;



 if (!(VAR_16 & VAR_3)) {
  switch (VAR_16) {
  case 128:
   if (VAR_6)
    goto defaulted;
   goto ignored;
  default:
   if (VAR_6)
    goto defaulted;
  }
 }


 else if ((VAR_16 & VAR_2) >= VAR_8 &&
   (VAR_16 & VAR_2) != VAR_7) {
  if (VAR_6)
   goto defaulted;
 }


 else if (!((VAR_11->application ^ VAR_16) & VAR_3)) {
  switch (VAR_12->hid) {
  case 131:
  case 129:
   VAR_15 = VAR_5;
   goto mapped;
  case 132:
  case 130:
   VAR_15 = VAR_4;
   goto mapped;
  }
 }







ignored:
 return -1;

defaulted:
 FUNC_0(VAR_9, "usage: %08x (appl: %08x) - defaulted\n",
  VAR_12->hid, VAR_11->application);
 return 0;

mapped:
 FUNC_2(VAR_10, VAR_12, VAR_13, VAR_14, VAR_0, VAR_15);
 FUNC_0(VAR_9, "usage: %08x (appl: %08x) - mapped to key %d\n",
  VAR_12->hid, VAR_11->application, VAR_15);
 return 1;
}
