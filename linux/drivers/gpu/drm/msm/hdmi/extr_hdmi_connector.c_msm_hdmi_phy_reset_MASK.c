
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct hdmi*,int ) ;
 int FUNC_1 (struct hdmi*,int ,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hdmi *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4);

 if (VAR_6 & VAR_1) {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 & ~VAR_0);
 } else {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 | VAR_0);
 }

 if (VAR_6 & VAR_3) {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 & ~VAR_2);
 } else {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 | VAR_2);
 }

 FUNC_2(100);

 if (VAR_6 & VAR_1) {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 | VAR_0);
 } else {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 & ~VAR_0);
 }

 if (VAR_6 & VAR_3) {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 | VAR_2);
 } else {

  FUNC_1(VAR_5, VAR_4,
    VAR_6 & ~VAR_2);
 }
}
