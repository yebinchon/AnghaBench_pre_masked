
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int temp ;
struct header_32 {int hdrlen; int align; void* datalen; void* caplen; void* ts_usec; void* ts_sec; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct bpf_hdr {int bh_caplen; int bh_datalen; int bh_hdrlen; TYPE_1__ bh_tstamp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,struct header_32*,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(uint8_t *VAR_1, const int VAR_2)
{
 struct header_32 VAR_3;
 uint8_t *VAR_4;
 uint8_t *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 for (VAR_4 = VAR_1; VAR_4 < (VAR_1 + VAR_2); VAR_4 = VAR_5) {

  const struct bpf_hdr *VAR_8;

  VAR_8 = (const struct bpf_hdr *)VAR_4;

  VAR_3.ts_sec = FUNC_2(VAR_8->bh_tstamp.tv_sec);
  VAR_3.ts_usec = FUNC_2(VAR_8->bh_tstamp.tv_usec);
  VAR_3.caplen = FUNC_2(VAR_8->bh_caplen);
  VAR_3.datalen = FUNC_2(VAR_8->bh_datalen);
  VAR_3.hdrlen = VAR_8->bh_hdrlen;
  VAR_3.align = FUNC_0(1);

  VAR_6 = VAR_8->bh_hdrlen;
  VAR_7 = VAR_8->bh_caplen;

  if ((VAR_6 >= sizeof(VAR_3)) && (VAR_6 <= 255) &&
      ((VAR_4 + VAR_6) <= (VAR_1 + VAR_2))) {
   FUNC_3(VAR_4, &VAR_3, sizeof(VAR_3));
   FUNC_4(VAR_4 + sizeof(VAR_3), 0, VAR_6 - sizeof(VAR_3));
  } else {
   FUNC_1(VAR_0, "Invalid header length %d", VAR_6);
  }

  VAR_5 = VAR_4 + FUNC_0(VAR_6 + VAR_7);

  if (VAR_5 <= VAR_4)
   FUNC_1(VAR_0, "Invalid length");
 }
}
