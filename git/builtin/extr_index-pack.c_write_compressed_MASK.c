
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hashfile {int dummy; } ;
typedef int outbuf ;
struct TYPE_5__ {unsigned int avail_in; unsigned char* next_out; int avail_out; unsigned int total_out; void* next_in; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct hashfile*,unsigned char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct hashfile *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 git_zstream VAR_7;
 int VAR_8;
 unsigned char VAR_9[4096];

 FUNC_4(&VAR_7, VAR_3);
 VAR_7.next_in = VAR_5;
 VAR_7.avail_in = VAR_6;

 do {
  VAR_7.next_out = VAR_9;
  VAR_7.avail_out = sizeof(VAR_9);
  VAR_8 = FUNC_2(&VAR_7, VAR_0);
  FUNC_5(VAR_4, VAR_9, sizeof(VAR_9) - VAR_7.avail_out);
 } while (VAR_8 == VAR_1);

 if (VAR_8 != VAR_2)
  FUNC_1(FUNC_0("unable to deflate appended object (%d)"), VAR_8);
 VAR_6 = VAR_7.total_out;
 FUNC_3(&VAR_7);
 return VAR_6;
}
