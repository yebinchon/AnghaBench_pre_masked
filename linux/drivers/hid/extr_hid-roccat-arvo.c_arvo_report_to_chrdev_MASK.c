
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct arvo_special_report {int event; } ;
struct arvo_roccat_report {int button; int action; int profile; } ;
struct arvo_device {int chrdev_minor; int actual_profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct arvo_device const *VAR_5,
  u8 const *VAR_6)
{
 struct arvo_special_report const *VAR_7;
 struct arvo_roccat_report VAR_8;

 VAR_7 = (struct arvo_special_report const *)VAR_6;

 VAR_8.profile = VAR_5->actual_profile;
 VAR_8.button = VAR_7->event &
   VAR_4;
 if ((VAR_7->event & VAR_3) ==
   VAR_2)
  VAR_8.action = VAR_0;
 else
  VAR_8.action = VAR_1;

 FUNC_0(VAR_5->chrdev_minor,
   (uint8_t const *)&VAR_8);
}
