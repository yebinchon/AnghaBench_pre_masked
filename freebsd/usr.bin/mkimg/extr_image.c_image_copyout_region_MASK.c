
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
struct TYPE_4__ {int ofs; int fd; } ;
struct TYPE_6__ {TYPE_2__ mem; TYPE_1__ file; } ;
struct chunk {scalar_t__ ch_block; size_t ch_size; int ch_type; TYPE_3__ ch_u; } ;
typedef scalar_t__ lba_t ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct chunk* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,size_t,int ,int ) ;
 int FUNC_3 (int,size_t,int ) ;
 int FUNC_4 (int,size_t) ;
 scalar_t__ VAR_1 ;

int
FUNC_5(int VAR_2, lba_t VAR_3, lba_t VAR_4)
{
 struct chunk *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 VAR_4 *= VAR_1;

 VAR_8 = 0;
 while (!VAR_8 && VAR_4 > 0) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 == ((void*)0)) {
   VAR_8 = VAR_0;
   break;
  }
  VAR_6 = (VAR_3 - VAR_5->ch_block) * VAR_1;
  VAR_7 = VAR_5->ch_size - VAR_6;
  VAR_7 = ((lba_t)VAR_7 < VAR_4) ? VAR_7 : (size_t)VAR_4;
  switch (VAR_5->ch_type) {
  case 128:
   VAR_8 = FUNC_4(VAR_2, VAR_7);
   break;
  case 130:
   VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_5->ch_u.file.fd,
       VAR_5->ch_u.file.ofs + VAR_6);
   break;
  case 129:
   VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_5->ch_u.mem.ptr);
   break;
  default:
   FUNC_0(0);
  }
  VAR_4 -= VAR_7;
  VAR_3 += VAR_7 / VAR_1;
 }
 return (VAR_8);
}
