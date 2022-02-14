
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
typedef int stream ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {unsigned char* next_in; unsigned char* next_out; int avail_out; unsigned long total_out; scalar_t__ total_in; int avail_in; } ;
typedef TYPE_1__ git_zstream ;
typedef int fakebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 unsigned char* FUNC_4 (struct packed_git*,struct pack_window**,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct packed_git *VAR_4,
  struct pack_window **VAR_5,
  off_t VAR_6,
  off_t VAR_7,
  unsigned long VAR_8)
{
 git_zstream VAR_9;
 unsigned char VAR_10[4096], *VAR_11;
 int VAR_12;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(&VAR_9);
 do {
  VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6, &VAR_9.avail_in);
  VAR_9.next_in = VAR_11;
  VAR_9.next_out = VAR_10;
  VAR_9.avail_out = sizeof(VAR_10);
  VAR_12 = FUNC_0(&VAR_9, VAR_1);
  VAR_6 += VAR_9.next_in - VAR_11;
 } while (VAR_12 == VAR_2 || VAR_12 == VAR_0);
 FUNC_1(&VAR_9);
 return (VAR_12 == VAR_3 &&
  VAR_9.total_out == VAR_8 &&
  VAR_9.total_in == VAR_7) ? 0 : -1;
}
