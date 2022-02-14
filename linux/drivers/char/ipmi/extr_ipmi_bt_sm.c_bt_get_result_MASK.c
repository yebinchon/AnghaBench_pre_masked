
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {int read_count; unsigned char* read_data; TYPE_1__* io; scalar_t__ truncated; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct si_sm_data*,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct si_sm_data *VAR_5,
    unsigned char *VAR_6,
    unsigned int VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = VAR_5->read_count - 2;
 if (VAR_9 < 3 || VAR_9 > VAR_3) {
  FUNC_1(VAR_5, VAR_2);
  VAR_9 = 3;
 }
 VAR_6[0] = VAR_5->read_data[1];
 VAR_6[1] = VAR_5->read_data[3];
 if (VAR_7 < VAR_9 || VAR_5->truncated) {
  VAR_6[2] = VAR_1;
  VAR_9 = 3;
 } else
  FUNC_2(VAR_6 + 2, VAR_5->read_data + 4, VAR_9 - 2);

 if (VAR_4 & VAR_0) {
  FUNC_0(VAR_5->io->dev, "result %d bytes:", VAR_9);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   FUNC_3(" %02x", VAR_6[VAR_8]);
  FUNC_3("\n");
 }
 return VAR_9;
}
