
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct _errcode TYPE_1__ ;


typedef int errcode ;
struct _errcode {int bytes_provided; int bytes_available; char* msgid; } ;
typedef TYPE_1__ SSTS0200 ;
typedef int ILEpointer ;


 int VAR_0 ;
 int FUNC_0 (int *,void**,int ) ;
 int FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(SSTS0200* VAR_1) {

  unsigned int VAR_2 = sizeof(*VAR_1);


  unsigned char VAR_3[] = {0xE2, 0xE2, 0xE3, 0xE2, 0xF0, 0xF2, 0xF0, 0xF0};


  unsigned char VAR_4[] = {
    0x5C, 0xD5, 0xD6, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40
  };


  struct _errcode {
    int bytes_provided;
    int bytes_available;
    char msgid[7];
  } VAR_5;


  ILEpointer __attribute__((aligned(16))) VAR_6;


  void* VAR_7[6];


  int VAR_8 = FUNC_1(&VAR_6, VAR_0, "QWCRSSTS", "QSYS");

  if (VAR_8 != 0)
    return VAR_8;


  FUNC_2(VAR_1, 0, sizeof(*VAR_1));


  FUNC_2(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.bytes_provided = sizeof(VAR_5);


  VAR_7[0] = VAR_1;
  VAR_7[1] = &VAR_2;
  VAR_7[2] = &VAR_3;
  VAR_7[3] = &VAR_4;
  VAR_7[4] = &VAR_5;
  VAR_7[5] = ((void*)0);


  VAR_8 = FUNC_0(&VAR_6, (void**)&VAR_7, 0);

  return VAR_8;
}
