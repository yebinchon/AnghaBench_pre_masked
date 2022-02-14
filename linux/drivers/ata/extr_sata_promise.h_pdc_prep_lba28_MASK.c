
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int feature; int nsect; int lbal; int lbam; int lbah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct ata_taskfile *VAR_5, u8 *VAR_6, unsigned int VAR_7)
{



 VAR_6[VAR_7++] = (1 << 5) | VAR_0;
 VAR_6[VAR_7++] = VAR_5->feature;

 VAR_6[VAR_7++] = (1 << 5) | VAR_4;
 VAR_6[VAR_7++] = VAR_5->nsect;

 VAR_6[VAR_7++] = (1 << 5) | VAR_2;
 VAR_6[VAR_7++] = VAR_5->lbal;

 VAR_6[VAR_7++] = (1 << 5) | VAR_3;
 VAR_6[VAR_7++] = VAR_5->lbam;

 VAR_6[VAR_7++] = (1 << 5) | VAR_1;
 VAR_6[VAR_7++] = VAR_5->lbah;

 return VAR_7;
}
