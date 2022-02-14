
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ url; scalar_t__ date; scalar_t__ auth; } ;
typedef TYPE_1__ s3aux_t ;
struct TYPE_11__ {int fd; long hdr; int m_buf; int * buf; int curl; int multi; } ;
typedef TYPE_2__ kurl_t ;
struct TYPE_12__ {char* s3keyid; char* s3secretkey; char* s3key_fn; } ;
typedef TYPE_3__ kurl_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,...) ;
 int FUNC_3 () ;
 void* FUNC_4 (long,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char const) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char const*,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ) ;
 char const* FUNC_12 (char const*,char*) ;
 long VAR_12 ;

kurl_t *FUNC_13(const char *VAR_13, kurl_opt_t *VAR_14)
{
 extern s3aux_t FUNC_14(const char *VAR_15, const char *VAR_16, const char *VAR_17, const char *VAR_18);
 const char *VAR_19, *VAR_20;
 kurl_t *VAR_21;
 int VAR_22 = -1, VAR_23 = 1, VAR_24 = 0;

 VAR_19 = FUNC_12(VAR_13, "://");
 if (VAR_19 && *VAR_19) {
  for (VAR_20 = VAR_13; VAR_20 != VAR_19; ++VAR_20)
   if (!FUNC_7(*VAR_20)) break;
  if (VAR_20 == VAR_19) VAR_23 = 0;
 }
 if (VAR_23 && (VAR_22 = FUNC_10(VAR_13, VAR_11)) < 0) return 0;

 VAR_21 = (kurl_t*)FUNC_0(1, sizeof(kurl_t));
 VAR_21->fd = VAR_23? VAR_22 : -1;
 if (!FUNC_9(VAR_21)) {
  VAR_21->multi = FUNC_3();
  VAR_21->curl = FUNC_1();
  if (FUNC_12(VAR_13, "s3://") == VAR_13) {
   s3aux_t VAR_25;
   VAR_25 = FUNC_14(VAR_13, (VAR_14? VAR_14->s3keyid : 0), (VAR_14? VAR_14->s3secretkey : 0), (VAR_14? VAR_14->s3key_fn : 0));
   if (VAR_25.url == 0 || VAR_25.date == 0 || VAR_25.auth == 0) {
    FUNC_8(VAR_21);
    return 0;
   }
   VAR_21->hdr = FUNC_4(VAR_21->hdr, VAR_25.date);
   VAR_21->hdr = FUNC_4(VAR_21->hdr, VAR_25.auth);
   FUNC_2(VAR_21->curl, VAR_5, VAR_25.url);
   FUNC_2(VAR_21->curl, VAR_1, VAR_21->hdr);
   FUNC_6(VAR_25.date); FUNC_6(VAR_25.auth); FUNC_6(VAR_25.url);
  } else FUNC_2(VAR_21->curl, VAR_5, VAR_13);
  FUNC_2(VAR_21->curl, VAR_7, VAR_21);
  FUNC_2(VAR_21->curl, VAR_6, 0L);
  FUNC_2(VAR_21->curl, VAR_2, 1L);
  FUNC_2(VAR_21->curl, VAR_8, VAR_12);
  FUNC_2(VAR_21->curl, VAR_4, 0L);
  FUNC_2(VAR_21->curl, VAR_3, 0L);
  FUNC_2(VAR_21->curl, VAR_0, 1L);
 }
 VAR_21->m_buf = VAR_10;
 if (!FUNC_9(VAR_21) && VAR_21->m_buf < VAR_9 * 2)
  VAR_21->m_buf = VAR_9 * 2;
 VAR_21->buf = (uint8_t*)FUNC_0(VAR_21->m_buf, 1);
 if (FUNC_9(VAR_21)) VAR_24 = (FUNC_5(VAR_21) <= 0);
 else VAR_24 = (FUNC_11(VAR_21, 0) < 0 || FUNC_5(VAR_21) <= 0);
 if (VAR_24) {
  FUNC_8(VAR_21);
  return 0;
 }
 return VAR_21;
}
