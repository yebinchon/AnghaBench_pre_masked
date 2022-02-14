
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
typedef double uint64_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sender_state {struct sockaddr_in addr; int udp_handle; int send_req; } ;
struct receiver_state {struct sockaddr_in addr; int udp_handle; int send_req; } ;


 unsigned int FUNC_0 (struct sender_state*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct sender_state* VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (char*,unsigned int,unsigned int,double,double,double,double,double) ;
 struct sender_state* VAR_7 ;
 int VAR_8 ;
 double VAR_9 ;
 int VAR_10 ;
 double VAR_11 ;
 struct sender_state* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct sender_state FUNC_4 (scalar_t__,int) ;
 int * FUNC_5 () ;
 double FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,scalar_t__,struct sockaddr_in*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int ,unsigned long,int ) ;
 scalar_t__ FUNC_11 (int *,struct sockaddr const*,int ) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int ,int ) ;
 scalar_t__ FUNC_14 (int *,int *,struct sender_state*,unsigned int,struct sockaddr const*,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(unsigned int VAR_15,
                  unsigned int VAR_16,
                  unsigned long VAR_17) {
  uv_timer_t VAR_18;
  uint64_t VAR_19;
  uv_loop_t* VAR_20;
  unsigned int VAR_21;

  FUNC_1(VAR_15 <= FUNC_0(VAR_12));
  FUNC_1(VAR_16 <= FUNC_0(VAR_7));

  VAR_20 = FUNC_5();

  VAR_6 = VAR_15;
  VAR_5 = VAR_16;

  if (VAR_17) {
    FUNC_1(0 == FUNC_9(VAR_20, &VAR_18));
    FUNC_1(0 == FUNC_10(&VAR_18, VAR_14, VAR_17, 0));

    FUNC_15((uv_handle_t*)&VAR_18);
    VAR_13 = 1;
  }

  for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
    struct receiver_state* VAR_22 = VAR_7 + VAR_21;
    struct sockaddr_in VAR_23;
    FUNC_1(0 == FUNC_7("0.0.0.0", VAR_0 + VAR_21, &VAR_23));
    FUNC_1(0 == FUNC_12(VAR_20, &VAR_22->udp_handle));
    FUNC_1(0 == FUNC_11(&VAR_22->udp_handle, (const struct sockaddr*) &VAR_23, 0));
    FUNC_1(0 == FUNC_13(&VAR_22->udp_handle, VAR_3, VAR_8));
    FUNC_15((uv_handle_t*)&VAR_22->udp_handle);
  }

  VAR_4[0] = FUNC_4(VAR_1 + 0, 10);
  VAR_4[1] = FUNC_4(VAR_1 + 10, 10);
  VAR_4[2] = FUNC_4(VAR_1 + 20, 10);
  VAR_4[3] = FUNC_4(VAR_1 + 30, 10);
  VAR_4[4] = FUNC_4(VAR_1 + 40, 5);

  for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
    struct sender_state* VAR_24 = VAR_12 + VAR_21;
    FUNC_1(0 == FUNC_7("127.0.0.1",
                            VAR_0 + (VAR_21 % VAR_16),
                            &VAR_24->addr));
    FUNC_1(0 == FUNC_12(VAR_20, &VAR_24->udp_handle));
    FUNC_1(0 == FUNC_14(&VAR_24->send_req,
                            &VAR_24->udp_handle,
                            VAR_4,
                            FUNC_0(VAR_4),
                            (const struct sockaddr*) &VAR_24->addr,
                            VAR_10));
  }

  VAR_19 = FUNC_6();
  FUNC_1(0 == FUNC_8(VAR_20, VAR_2));
  VAR_19 = FUNC_6() - VAR_19;

  VAR_19 = VAR_19 / (uint64_t) 1e6;

  FUNC_3("udp_pummel_%dv%d: %.0f/s received, %.0f/s sent. "
         "%u received, %u sent in %.1f seconds.\n",
         VAR_16,
         VAR_15,
         VAR_9 / (VAR_19 / 1000.0),
         VAR_11 / (VAR_19 / 1000.0),
         VAR_9,
         VAR_11,
         VAR_19 / 1000.0);

  FUNC_2();
  return 0;
}
