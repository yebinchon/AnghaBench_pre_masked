
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int start; int wptr; } ;
struct TYPE_8__ {int id; int flags; int qdcount; int ancount; int nscount; int arcount; } ;
struct TYPE_7__ {int rcode; TYPE_1__ Out; TYPE_3__ header; } ;
typedef TYPE_2__ dns_response_t ;
typedef TYPE_3__ dns_header_t ;
struct TYPE_9__ {int rcode_refused_queries; int rcode_not_implemented_queries; int rcode_name_error_queries; int rcode_server_failure_queries; int rcode_format_queries; int rcode_no_error_queries; } ;


 int FUNC_0 (int ) ;






 unsigned short FUNC_1 (int) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static int FUNC_2 (dns_response_t *VAR_1) {
  unsigned short *VAR_2 = (unsigned short *) VAR_1->Out.start;
  dns_header_t *VAR_3 = &VAR_1->header;
  switch (VAR_1->rcode) {
    case 131:
      VAR_0.rcode_no_error_queries++;
      break;
    case 133:
      VAR_0.rcode_format_queries++;
      break;
    case 128:
      VAR_0.rcode_server_failure_queries++;
      break;
    case 132:
      VAR_0.rcode_name_error_queries++;
      break;
    case 130:
      VAR_0.rcode_not_implemented_queries++;
      break;
    case 129:
      VAR_0.rcode_refused_queries++;
      break;
    default:
      FUNC_0 (0);
  }
  VAR_2[0] = FUNC_1 (VAR_3->id);
  VAR_3->flags |= VAR_1->rcode;
  VAR_2[1] = FUNC_1 (VAR_3->flags);
  VAR_2[2] = FUNC_1 (VAR_3->qdcount);
  VAR_2[3] = FUNC_1 (VAR_3->ancount);
  VAR_2[4] = FUNC_1 (VAR_3->nscount);
  VAR_2[5] = FUNC_1 (VAR_3->arcount);
  return VAR_1->Out.wptr - VAR_1->Out.start;
}
