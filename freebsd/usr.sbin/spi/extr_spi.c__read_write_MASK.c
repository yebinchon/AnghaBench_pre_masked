
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {int iov_len; void* iov_base; } ;
struct spigen_transfer {TYPE_1__ st_command; } ;
typedef int spi ;


 int VAR_0 ;
 int FUNC_0 (struct spigen_transfer*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int,int ,struct spigen_transfer*) ;
 int FUNC_3 (void*,void*,int) ;
 size_t* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(int VAR_4, void *VAR_5, void *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct spigen_transfer VAR_11;

 if (!VAR_7)
  return 0;

 if (!VAR_6)
  VAR_6 = VAR_5;
 else
  FUNC_3(VAR_6, VAR_5, VAR_7);


 FUNC_0(&VAR_11, sizeof(VAR_11));



 VAR_11.st_command.iov_base = VAR_6;
 VAR_11.st_command.iov_len = VAR_7;
 VAR_9 = FUNC_2(VAR_4, VAR_0, &VAR_11) < 0 ? -1 : 0;

 if (!VAR_9 && VAR_8) {

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   ((uint8_t *) VAR_6)[VAR_10] =
       VAR_2[((uint8_t *)VAR_6)[VAR_10]];
  }
 }

 if (VAR_9)
  FUNC_1(VAR_3, "Error performing SPI transaction, errno=%d\n",
      VAR_1);

 return VAR_9;
}
