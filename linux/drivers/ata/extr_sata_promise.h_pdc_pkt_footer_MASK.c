
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int flags; int device; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct ata_taskfile *VAR_4, u8 *VAR_5,
      unsigned int VAR_6)
{
 if (VAR_4->flags & VAR_2) {
  VAR_5[VAR_6++] = (1 << 5) | VAR_1;
  VAR_5[VAR_6++] = VAR_4->device;
 }


 VAR_5[VAR_6++] = (1 << 5) | VAR_3 | VAR_0;
 VAR_5[VAR_6++] = VAR_4->command;

 return VAR_6;
}
