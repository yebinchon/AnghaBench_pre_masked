
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int ide_drive_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline u8 FUNC_1(ide_drive_t *VAR_0)
{
 return ((unsigned long)FUNC_0(VAR_0) & 0xff00) >> 8;
}
